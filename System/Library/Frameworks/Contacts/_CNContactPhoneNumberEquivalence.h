//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CNContactPhoneNumberEquivalence : NSObject
{
    NSString *_rawString;	// 8 = 0x8
    struct {
        char *_field1;
        char *_field2;
        char *_field3;
        unsigned int _field4;
        char *_field5;
        unsigned int _field6;
        char *_field7;
        unsigned int _field8;
    } *_decomposedRepresentation;	// 16 = 0x10
    char *_decomposedNumberDigits;	// 24 = 0x18
}

+ (id)indexKeyForString:(id)arg1;	// IMP=0x00100000000f4ee3
- (void).cxx_destruct;	// IMP=0x00000000000f521e
- (_Bool)isPhoneNumberEquivalent:(id)arg1 strict:(_Bool *)arg2;	// IMP=0x00000000000f5128
- (_Bool)preparePhoneNumberRepresentation;	// IMP=0x00000000000f5071
- (_Bool)isRawStringEquivalent:(id)arg1;	// IMP=0x00000000000f505b
- (_Bool)isEquivalentToString:(id)arg1 strict:(_Bool *)arg2;	// IMP=0x00000000000f4fda
- (void)dealloc;	// IMP=0x00000000000f4f8d
- (id)initWithPhoneNumberString:(id)arg1;	// IMP=0x00000000000f4efc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
