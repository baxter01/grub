/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2009,2019,2020  Free Software Foundation, Inc.
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GRUB_LUA_LIB_HEADER
#define GRUB_LUA_LIB_HEADER 1

int push_result (lua_State *state);
int save_errno (lua_State *state);

extern luaL_Reg grub_lua_lib[];
extern luaL_Reg inputlib[];
extern luaL_Reg videolib[];
extern luaL_Reg gbklib[];
extern luaL_Reg fatlib[];

#endif