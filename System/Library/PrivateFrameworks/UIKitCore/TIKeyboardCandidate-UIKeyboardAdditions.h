//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardCandidate.h>

@class UIImage;

@interface TIKeyboardCandidate (UIKeyboardAdditions)
@property(readonly, nonatomic) _Bool isReplacement;
@property(readonly, nonatomic) _Bool isAutofillCandidate;
@property(readonly, nonatomic) _Bool isSlottedCandidate;
@property(retain, nonatomic) UIImage *icon;
- (id)ui_supplementalItems;	// IMP=0x00300000011630bb
- (_Bool)ui_hasSupplementalItems;	// IMP=0x0030000001163073
@end
