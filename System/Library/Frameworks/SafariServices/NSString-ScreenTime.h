//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (ScreenTime)
+ (id)_sf_safeBrowsingPreferencesPlistPath;	// IMP=0x00200000000d24af
- (id)_sf_bestURLForUserTypedString;	// IMP=0x00100000000603db
- (id)_sf_ensurePathExtension:(id)arg1;	// IMP=0x00100000000d23c9
- (id)sf_lastPathComponentWithoutZipExtension;	// IMP=0x00100000000d22a0
- (id)sf_stringByReplacingLastOccurrenceOfWhitespaceWithANonBreakingSpace;	// IMP=0x00100000000d21fc
- (id)sf_stringByReplacingMarkupCharactersWithHTMLEntities;	// IMP=0x00100000000d2078
@property(readonly, nonatomic) NSString *sf_stringByAddingSoftBreaksBeforePeriods;
@property(readonly, nonatomic) NSString *sf_URLScheme;
@property(readonly, nonatomic) _Bool sf_isFeedScheme;
@property(readonly, nonatomic) _Bool sf_isConfigProfileMIMEType;
@end
