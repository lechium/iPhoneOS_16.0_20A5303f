//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface STNoUsageDataView : UIView
{
    _Bool _localDevice;	// 8 = 0x8
    UILabel *_noDataDetailTextLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000073785
@property(readonly, nonatomic) UILabel *noDataDetailTextLabel; // @synthesize noDataDetailTextLabel=_noDataDetailTextLabel;
@property(nonatomic, getter=isLocalDevice) _Bool localDevice; // @synthesize localDevice=_localDevice;
- (id)initWithPreferredFontTextStyle:(id)arg1;	// IMP=0x00000000000732c7

@end
