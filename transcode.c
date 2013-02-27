/* -*- Mode: C; tab-width: 4; c-basic-offset: 4; indent-tabs-mode: nil -*- */
/*
 *     Copyright 2012 Couchbase, Inc.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include <yajl/yajl_parse.h>
#include <yajl/yajl_gen.h>

    int
main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "wrong attributes. use: %s filename.json\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    return 0;
}

