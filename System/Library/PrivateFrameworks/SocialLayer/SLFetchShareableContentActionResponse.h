//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface SLFetchShareableContentActionResponse
{
    NSData *_dataRepresentation;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000029d06
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x0060000000029b88
+ (id)responseWithDataRepresentation:(id)arg1;	// IMP=0x0060000000029b1a
- (void).cxx_destruct;	// IMP=0x0000000000029ea9
@property(retain, nonatomic) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029dd1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029d0e
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000029c53
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000029b90

@end

