//
// Copyright (C) 2017 Red Hat, Inc.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// Authors: Daniel Kopecek <dkopecek@redhat.com>
//
#ifdef HAVE_BUILD_CONFIG_H
  #include <build-config.h>
#endif

#include "usbguard/Policy.hpp"
#include "usbguard/Exception.hpp"

namespace usbguard
{
  std::string Policy::eventTypeToString(Policy::EventType event)
  {
    switch (event) {
    case Policy::EventType::Insert:
      return "Insert";

    case Policy::EventType::Update:
      return "Update";

    case Policy::EventType::Remove:
      return "Remove";

    default:
      throw USBGUARD_BUG("unknown Policy::EventType value");
    }
  }
} /* namespace usbguard */

/* vim: set ts=2 sw=2 et */
