// Copyright (c) 2011-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0


#ifndef _SMARTSQL_H_
#define _SMARTSQL_H_

#include <sqlite3.h>

bool smart_sql_open(const char *path, sqlite3 **ret_db);
void smart_sql_close(sqlite3 *db);

bool smart_sql_exec(sqlite3 *db, const char *cmd);

#endif
