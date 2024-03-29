//
// Copyright 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

#import "GREYDiagnosable.h"
#import "GREYMatcher.h"

/**
 *  A base class that implements the GREYMatcher protocol methods.
 *  Prefer subclassing this class over creating your own matchers.
 *  Every subclass must override and provide its own implementation for GREYBaseMatcher::matches:
 *  and GREYBaseMatcher::describeTo: methods.
 */
@interface GREYBaseMatcher : NSObject <GREYMatcher, GREYDiagnosable, NSCopying>

/**
 *  @see GREYMatcher::matches:
 *
 *  @remark This method is required to be implemented in the subclass.
 */
- (BOOL)matches:(id)item;

/**
 *  @see GREYMatcher::describeTo:
 *
 *  @remark This method is required to be implemented in the subclass.
 */
- (void)describeTo:(id<GREYDescription>)description;

@end
