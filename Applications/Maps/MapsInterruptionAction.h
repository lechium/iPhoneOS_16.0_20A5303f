//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MapsInterruptionAction : NSObject
{
    _Bool _cancels;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
}

+ (id)actionWithTitle:(id)arg1 cancels:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00400000008391fe
- (void).cxx_destruct;	// IMP=0x00200000008393ab
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool cancels; // @synthesize cancels=_cancels;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)fire;	// IMP=0x00000000008392e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000839299

@end
