/**
 * controller.h
 * Created by Ron Bowes
 * On April, 2015
 *
 * See LICENSE.md
 *
 * The controller basically keeps track of active sessions and passes data
 * back and forth between the tunnel driver and the session. There is only
 * ever a single instance of this.
 */

#include "libs/types.h"
#include "session.h"

size_t controller_open_session_count();
void controller_add_session(session_t *session);
NBBOOL controller_data_incoming(uint8_t *data, size_t length);
uint8_t *controller_get_outgoing(size_t *length, size_t max_length);