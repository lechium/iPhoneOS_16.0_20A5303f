//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ADCommunalDeviceUserAttributes : NSObject
{
    NSMutableArray *_attributes;	// 8 = 0x8
}

+ (id)saCopy:(id)arg1;	// IMP=0x00400000001a6a15
- (void).cxx_destruct;	// IMP=0x00200000001a6c2c
- (id)attributes;	// IMP=0x00100000001a69f7
- (void)deleteAttribute:(unsigned long long)arg1;	// IMP=0x00100000001a69a3
- (void)addAttribute:(unsigned long long)arg1;	// IMP=0x00100000001a694f
- (id)initWithAttribute:(unsigned long long)arg1;	// IMP=0x00100000001a68a2

@end

