//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface ExtensionsBannerView : UIView
{
    UIView *_occludingView;	// 8 = 0x8
    UIView *_remoteView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007d56fd
@property(retain, nonatomic) UIView *remoteView; // @synthesize remoteView=_remoteView;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000007d56d3
- (void)_updateConstraints;	// IMP=0x00100000007d5581
- (void)_commonInit;	// IMP=0x00100000007d54e5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007d5488
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000007d543c

@end

