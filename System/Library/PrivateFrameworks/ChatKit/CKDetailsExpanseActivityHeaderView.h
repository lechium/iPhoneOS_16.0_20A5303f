//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface CKDetailsExpanseActivityHeaderView : UITableViewHeaderFooterView
{
    UITextView *_expanseActivityTextView;	// 8 = 0x8
}

+ (id)reuseIdentifier;	// IMP=0x0010000000550faa
- (void).cxx_destruct;	// IMP=0x00000000005513c4
@property(retain, nonatomic) UITextView *expanseActivityTextView; // @synthesize expanseActivityTextView=_expanseActivityTextView;
- (void)layoutSubviews;	// IMP=0x0000000000551057

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
