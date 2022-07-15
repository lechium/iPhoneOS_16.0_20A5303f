//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RPCloudMessageContext : NSObject
{
    NSString *_appleID;	// 8 = 0x8
    NSString *_cloudServiceID;	// 16 = 0x10
    NSString *_fromID;	// 24 = 0x18
    NSString *_sendersKnownAlias;	// 32 = 0x20
    NSString *_toID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000001d4b
@property(retain, nonatomic) NSString *toID; // @synthesize toID=_toID;
@property(retain, nonatomic) NSString *sendersKnownAlias; // @synthesize sendersKnownAlias=_sendersKnownAlias;
@property(retain, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
@property(retain, nonatomic) NSString *cloudServiceID; // @synthesize cloudServiceID=_cloudServiceID;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;

@end
