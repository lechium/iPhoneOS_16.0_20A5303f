//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaLibraryIdentifier : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001a0b4b
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a08ce
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a087f
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001a080c
- (id)init;	// IMP=0x00000000001a079d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

