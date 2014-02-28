//
//  LayoutView.h
//  SwitchTower
//
//  Created by Robert Bowdidge on 12/22/12.
// Copyright (c) 2013, Robert Bowdidge
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.
//

#import <UIKit/UIKit.h>

#import "LayoutModel.h"
@class Train;
@class Scenario;
@class LayoutViewController;

#define TILE_WIDTH 40.0
#define TILE_HEIGHT 40.0
#define TILE_HALF_WIDTH 20.0
#define TILE_HALF_HEIGHT 20.0
#define TILE_DRAW_WIDTH (TILE_WIDTH - 1.0)
#define TILE_DRAW_HEIGHT (TILE_HEIGHT - 1.0)

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768

// Draws the layout schematic.
// TODO(bowdidge): Consider using SpriteKit.
@interface LayoutView : UIView {

}
- (void) setSizeInTilesX: (int) x Y: (int) y;

@property(nonatomic, retain) NSDate *currentTime;
@property(nonatomic, retain) NSArray *routeColors;
@property(nonatomic, retain) LayoutModel *layoutModel;
@property(nonatomic, retain) Scenario *currentSpecification;
@property(nonatomic, assign) IBOutlet LayoutViewController *controller;
@property(nonatomic, assign) IBOutlet UIScrollView *containingScrollView;
@property(nonatomic, assign) CGSize viewSize;
@property(nonatomic, assign) int score;

@end
