//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SKUIComposeReviewView, SKUIReviewMetadata;
@protocol SKUIComposeReviewFormDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewFormViewController : SUViewController
{
    SKUIComposeReviewView *_composeView;	// 8 = 0x8
    id <SKUIComposeReviewFormDelegate> _delegate;	// 16 = 0x10
    SKUIReviewMetadata *_review;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000022529
@property(nonatomic) __weak id <SKUIComposeReviewFormDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_submit;	// IMP=0x0000000000022472
- (void)_cancel;	// IMP=0x00000000000223e8
- (void)composeReviewViewValidityChanged:(id)arg1;	// IMP=0x000000000002235b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000222a8
- (void)loadView;	// IMP=0x000000000002200f
- (void)setRating:(float)arg1;	// IMP=0x0000000000021ff2
@property(readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
- (void)dealloc;	// IMP=0x0000000000021f82
- (id)initWithReviewMetadata:(id)arg1;	// IMP=0x0000000000021f08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
