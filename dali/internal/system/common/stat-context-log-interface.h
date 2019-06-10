#ifndef DALI_INTERNAL_ADAPTOR_STATISTICS_STAT_CONTEXT_LOG_INTERFACE_H
#define DALI_INTERNAL_ADAPTOR_STATISTICS_STAT_CONTEXT_LOG_INTERFACE_H

/*
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

namespace Dali
{

namespace Internal
{

namespace Adaptor
{

/**
 * @brief  Abstract interface used to log statistics data
 */
class StatContextLogInterface
{
public:

  /**
   * @brief Used to log statistics out
   * @param[in] text log the text
   */
  virtual void LogContextStatistics( const char* const text) = 0;


protected:

  /**
   * @brief  Constructor
   */
  StatContextLogInterface()
  {
  }

  /**
   * @brief Virtual Destructor
   */
  virtual ~StatContextLogInterface()
  {
  }

private:

  // Undefined copy constructor.
  StatContextLogInterface( const StatContextLogInterface& );

  // Undefined assignment operator.
  StatContextLogInterface& operator=( const StatContextLogInterface& );

};


} // namespace Internal

} // namespace Adaptor

} // namespace Dali

#endif // DALI_INTERNAL_ADAPTOR_STATISTICS_STAT_CONTEXT_LOG_INTERFACE_H