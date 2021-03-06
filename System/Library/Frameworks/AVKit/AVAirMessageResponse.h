//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVAirMessageResponse : NSObject
{
    long long _status;	// 8 = 0x8
    NSString *_localizedDescription;	// 16 = 0x10
}

+ (id)messageWithParts:(id)arg1;	// IMP=0x0010000000116103
+ (id)responseWithParts:(id)arg1;	// IMP=0x0010000000116009
+ (id)messageWithVersion:(id)arg1 headers:(id)arg2 bodyData:(id)arg3;	// IMP=0x0010000000115d9d
- (void).cxx_destruct;	// IMP=0x0000000000115d8d
@property(readonly, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)messageDataRepresentation;	// IMP=0x0000000000115a48
- (id)bodyData;	// IMP=0x000000000011588c
@property(readonly, copy) NSString *description;
- (id)headersForContentLength:(long long)arg1 compression:(id)arg2;	// IMP=0x00000000001155f9
- (id)initWithStatus:(long long)arg1 localizedDescription:(id)arg2;	// IMP=0x000000000011557b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

