/*
 Copyright 2016-present Google Inc. All Rights Reserved.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import "RMXVariable.h"

@class UIColor;

/** RMXColorUpdateBlock is a block that will be invoked when a boolean Variable is updated. */
typedef void (^RMXColorUpdateBlock)(RMXVariable *variable, UIColor *selectedValue);

/** A type of Variable for colors. */
@interface RMXColorVariable : RMXVariable

/** The selected value of this Variable */
@property(nonatomic, strong) UIColor *selectedValue;

/** Designated initializer */
+ (instancetype)addColorVariableWithKey:(NSString *)key
                           defaultValue:(UIColor *)defaultValue
                            updateBlock:(RMXColorUpdateBlock)updateBlock;

@end
