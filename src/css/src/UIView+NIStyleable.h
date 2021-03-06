//
// Copyright 2011 Jeff Verkoeyen
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>

@class NICSSRuleset;

@interface UIView (NIStyleable)

/**
 * Applies the given rule set to this view.
 *
 * This method is exposed primarily for subclasses to use when implementing the
 * applyStyleWithRuleSet: method from NIStyleable.
 */
- (void)applyViewStyleWithRuleSet:(NICSSRuleset *)ruleSet;

////////////////////////////////////////////////////////////////////////////////////////////////////
// View frame and bounds manipulation helpers
////////////////////////////////////////////////////////////////////////////////////////////////////
@property (nonatomic) CGFloat frameWidth;
@property (nonatomic) CGFloat frameHeight;
@property (nonatomic) CGFloat frameMinX;
@property (nonatomic) CGFloat frameMidX;
@property (nonatomic) CGFloat frameMaxX;
@property (nonatomic) CGFloat frameMinY;
@property (nonatomic) CGFloat frameMidY;
@property (nonatomic) CGFloat frameMaxY;

@end
