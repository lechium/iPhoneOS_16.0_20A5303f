//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABContactsUserDefaultsABWrapper : NSObject
{
}

- (void)setDisplayedContactsFilterRepresentationPref:(id)arg1;	// IMP=0x000000000005debc
- (id)displayedContactsFilterRepresentationPref;	// IMP=0x000000000005de9b
- (id)abDefaultCountryCode;	// IMP=0x000000000005de82
- (_Bool)ABPersonGetShortNamePreferNicknames;	// IMP=0x000000000005de78
- (void)ABPersonSetShortNamePreferNicknames:(_Bool)arg1;	// IMP=0x000000000005de6c
- (_Bool)ABPersonGetShortNameFormatEnabled;	// IMP=0x000000000005de62
- (void)ABPersonSetShortNameFormatEnabled:(_Bool)arg1;	// IMP=0x000000000005de56
- (unsigned int)ABPersonGetShortNameFormat;	// IMP=0x000000000005de4c
- (void)ABPersonSetShortNameFormat:(unsigned int)arg1;	// IMP=0x000000000005de40
- (unsigned int)ABPersonGetSortOrdering;	// IMP=0x000000000005de36
- (unsigned int)ABPersonGetEditNameFormat;	// IMP=0x000000000005de2c
- (void)ABPersonSetCompositeNameFormat:(unsigned int)arg1;	// IMP=0x000000000005de20
- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)arg1;	// IMP=0x000000000005de13

@end

