//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKTranscriptLabelCell.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell
{
    NSAttributedString *_attributedButtonText;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000005516ae
@property(copy, nonatomic) NSAttributedString *attributedButtonText; // @synthesize attributedButtonText=_attributedButtonText;
- (void)clearFilters;	// IMP=0x000000000055165d
- (void)addFilter:(id)arg1;	// IMP=0x000000000055162e
- (void)layoutSubviewsForAlignmentContents;	// IMP=0x0000000000551417
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005513d7
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x000000000034ca94

@end

