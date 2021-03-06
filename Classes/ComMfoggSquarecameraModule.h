/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiModule.h"
#import "TiUIView.h"
#import "TiBase.h"
#import "TiHost.h"
#import "TiUtils.h"
#import "TiBlob.h" 


#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreVideo/CoreVideo.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreFoundation/CoreFoundation.h>
#import <CoreFoundation/CFData.h>
#import <CoreFoundation/CFSocket.h>
#import <ImageIO/ImageIO.h>
#import <ImageIO/CGImageProperties.h>

NS_ENUM(NSInteger, SessionPresetType)
{
    LOW_QUALITY = 0,
    MEDIUM_QUALITY = 1,
    HIGH_QUALITY = 2,
    HD_QUALITY = 3,
    PHOTO_QUALITY = 4,
    UHD_QUALITY = 5
};

@interface ComMfoggSquarecameraModule : TiModule 
{
}

@property (strong, nonatomic) UIWindow *window;

@end
