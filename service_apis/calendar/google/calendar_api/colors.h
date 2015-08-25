// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_CALENDAR_API_COLORS_H_
#define  GOOGLE_CALENDAR_API_COLORS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/calendar_api/color_definition.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_calendar_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class Colors : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Colors* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Colors(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Colors(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Colors();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::Colors</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::Colors");
  }

  /**
   * Determine if the '<code>calendar</code>' attribute was set.
   *
   * @return true if the '<code>calendar</code>' attribute was set.
   */
  bool has_calendar() const {
    return Storage().isMember("calendar");
  }

  /**
   * Clears the '<code>calendar</code>' attribute.
   */
  void clear_calendar() {
    MutableStorage()->removeMember("calendar");
  }


  /**
   * Get a reference to the value of the '<code>calendar</code>' attribute.
   */
  const client::JsonCppAssociativeArray<ColorDefinition > get_calendar() const;

  /**
   * Gets a reference to a mutable value of the '<code>calendar</code>'
   * property.
   *
   * A global palette of calendar colors, mapping from the color ID to its
   * definition. A calendarListEntry resource refers to one of these color IDs
   * in its color field. Read-only.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<ColorDefinition > mutable_calendar();

  /**
   * Determine if the '<code>event</code>' attribute was set.
   *
   * @return true if the '<code>event</code>' attribute was set.
   */
  bool has_event() const {
    return Storage().isMember("event");
  }

  /**
   * Clears the '<code>event</code>' attribute.
   */
  void clear_event() {
    MutableStorage()->removeMember("event");
  }


  /**
   * Get a reference to the value of the '<code>event</code>' attribute.
   */
  const client::JsonCppAssociativeArray<ColorDefinition > get_event() const;

  /**
   * Gets a reference to a mutable value of the '<code>event</code>' property.
   *
   * A global palette of event colors, mapping from the color ID to its
   * definition. An event resource may refer to one of these color IDs in its
   * color field. Read-only.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<ColorDefinition > mutable_event();

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Type of the resource ("calendar#colors").
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>updated</code>' attribute was set.
   *
   * @return true if the '<code>updated</code>' attribute was set.
   */
  bool has_updated() const {
    return Storage().isMember("updated");
  }

  /**
   * Clears the '<code>updated</code>' attribute.
   */
  void clear_updated() {
    MutableStorage()->removeMember("updated");
  }


  /**
   * Get the value of the '<code>updated</code>' attribute.
   */
  client::DateTime get_updated() const {
    const Json::Value& storage = Storage("updated");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>updated</code>' attribute.
   *
   * Last modification time of the color palette (as a RFC3339 timestamp). Read-
   * only.
   *
   * @param[in] value The new value.
   */
  void set_updated(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("updated"));
  }

 private:
  void operator=(const Colors&);
};  // Colors
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_COLORS_H_
