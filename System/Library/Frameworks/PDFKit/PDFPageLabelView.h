//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PDFPageLabelViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLabelView : UIView
{
    PDFPageLabelViewPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008a589
- (void)_startFade;	// IMP=0x000000000008a512
- (void)updateEffect;	// IMP=0x000000000008a45d
- (void)setCurrentPageNumber:(unsigned long long)arg1 forPageCount:(unsigned long long)arg2;	// IMP=0x000000000008a3a7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000089fa2

@end
