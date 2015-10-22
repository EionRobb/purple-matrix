/**
 * matrix-sync.h
 *
 * Receipt of events from the matrix homeserver works by continually polling the
 * /sync API endpoint. This module manages that process. It provides a single
 * method which initiates a /sync request for an authenticated MatrixConnectionData.
 *
 * On completion of the request, any events it returned are dispatched to the
 * relevant rooms, and another /sync request is started.
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111-1301 USA
 */

#ifndef MATRIX_SYNC_H_
#define MATRIX_SYNC_H_

#include "libmatrix.h"

/**
 *  Start the sync loop for a matrix account. This will repeatedly call
 * '/sync' to get room information and new events.
 */
void matrix_sync_start_loop(MatrixConnectionData *ma);

#endif /* MATRIX_SYNC_H_ */
