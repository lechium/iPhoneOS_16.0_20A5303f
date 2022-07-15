//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RAPWebBundleMapViewPosition : NSObject
{
    NSString *_mapId;	// 8 = 0x8
    double _height;	// 16 = 0x10
    double _opacity;	// 24 = 0x18
    double _yPosition;	// 32 = 0x20
    double _xPosition;	// 40 = 0x28
    double _widthPadding;	// 48 = 0x30
    double _widthPercent;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000032741b
@property(readonly, nonatomic) double widthPercent; // @synthesize widthPercent=_widthPercent;
@property(readonly, nonatomic) double widthPadding; // @synthesize widthPadding=_widthPadding;
@property(readonly, nonatomic) double xPosition; // @synthesize xPosition=_xPosition;
@property(readonly, nonatomic) double yPosition; // @synthesize yPosition=_yPosition;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) NSString *mapId; // @synthesize mapId=_mapId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00100000003271c8

@end
