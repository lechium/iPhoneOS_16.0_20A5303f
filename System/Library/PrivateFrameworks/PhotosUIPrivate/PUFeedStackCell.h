//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUStackView;

__attribute__((visibility("hidden")))
@interface PUFeedStackCell
{
    PUStackView *_stackView;	// 8 = 0x8
    struct UIOffset _stackOffset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001754f3
@property(nonatomic) struct UIOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property(retain, nonatomic) PUStackView *stackView; // @synthesize stackView=_stackView;
- (void)layoutSubviews;	// IMP=0x0000000000175356
- (void)prepareForReuse;	// IMP=0x0000000000175261
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000175166

@end

