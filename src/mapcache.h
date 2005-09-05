/*
 * viking -- GPS Data and Topo Analyzer, Explorer, and Manager
 *
 * Copyright (C) 2003-2005, Evan Battaglia <gtoevan@gmx.net>
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef __VIKING_MAPCACHE_H
#define __VIKING_MAPCACHE_H

void a_mapcache_init ();
void a_mapcache_add ( GdkPixbuf *pixbuf, gint x, gint y, gint z, guint8 type, guint zoom, guint8 alpha, gdouble xshrinkfactor, gdouble yshrinkfactor );
GdkPixbuf *a_mapcache_get ( gint x, gint y, gint z, guint8 type, guint zoom, guint8 alpha, gdouble xshrinkfactor, gdouble yshrinkfactor );
void a_mapcache_remove_all_shrinkfactors ( guint16 x, guint16 y, guint16 z, guint8 type, guint zoom );
void a_mapcache_uninit ();

#endif
