//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000ff4b7
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ff39b
- (id)buildDictionaryRepresentation;	// IMP=0x00100000000ff512
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000000ff4d7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000ff4d1
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000ff4bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ff4ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ff47d
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000ff410
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x00100000000ff3e8
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ff2f4
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ff5a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
