/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ABI39_0_0React/ABI39_0_0RCTShadowView.h>

@class ABI39_0_0RCTRootShadowView;

@interface ABI39_0_0RCTShadowView (Internal)

@property (nonatomic, weak, readwrite) ABI39_0_0RCTRootShadowView *rootView;

@end
