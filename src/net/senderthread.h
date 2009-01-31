/***************************************************************************
 *   Copyright (C) 2007 by Lothar May                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
/* Network sender thread. */

#ifndef _SENDERTHREAD_H_
#define _SENDERTHREAD_H_

#include <core/thread.h>
#include <net/senderinterface.h>
#include <net/netpacket.h>
#include <net/sendercallback.h>

#include <list>
#include <boost/shared_ptr.hpp>

class SessionData;
class SendDataManager;
#define SENDER_THREAD_TERMINATE_TIMEOUT		THREAD_WAIT_INFINITE

class SenderThread : public Thread, public SenderInterface
{
public:
	SenderThread(SenderCallback &cb);
	virtual ~SenderThread();

	virtual void Start();
	virtual void SignalStop();
	virtual void WaitStop();

	virtual void Send(boost::shared_ptr<SessionData> session, boost::shared_ptr<NetPacket> packet);
	virtual void Send(boost::shared_ptr<SessionData> session, const NetPacketList &packetList);

	boost::shared_ptr<boost::asio::io_service> GetIOService();

protected:
	typedef std::list<unsigned> ChangedSessionList;

	typedef std::map<SessionId, boost::shared_ptr<SendDataManager> > SendQueueMap;

	// Main function of the thread.
	virtual void Main();

private:

	SendQueueMap m_sendQueueMap;
	mutable boost::mutex m_sendQueueMapMutex;

	ChangedSessionList m_changedSessions;
	mutable boost::mutex m_changedSessionsMutex;

	SenderCallback &m_callback;
	boost::shared_ptr<boost::asio::io_service> m_ioService;

	mutable boost::shared_ptr<boost::barrier> m_ioServiceBarrier;
};

#endif

