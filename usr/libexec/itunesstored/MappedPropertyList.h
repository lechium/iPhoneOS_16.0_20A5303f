//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface MappedPropertyList : NSObject
{
    NSData *_data;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
}

+ (id)readKeyPaths:(id)arg1 fromURL:(id)arg2 error:(id *)arg3;	// IMP=0x00400000001bf306
+ (id)readKeyPath:(id)arg1 fromURL:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001bf263
- (void).cxx_destruct;	// IMP=0x00200000001bf52e
- (id)readKeyPaths:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bf414
- (id)readKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bf3a9
- (id)initWithURL:(id)arg1;	// IMP=0x00100000001bf1ab

@end
