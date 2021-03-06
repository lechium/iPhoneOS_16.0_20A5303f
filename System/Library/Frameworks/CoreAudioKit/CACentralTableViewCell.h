//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface CACentralTableViewCell : UITableViewCell
{
    UILabel *_deviceNameLabel;	// 8 = 0x8
    UILabel *_connectionStatusLabel;	// 16 = 0x10
    UILabel *_inputLabel;	// 24 = 0x18
    UILabel *_slashLabel;	// 32 = 0x20
    UILabel *_outputLabel;	// 40 = 0x28
    UIActivityIndicatorView *_activityIndicator;	// 48 = 0x30
    NSArray *_labelConstraints;	// 56 = 0x38
    NSArray *_activityHConstraints;	// 64 = 0x40
    NSArray *_activityVConstraints;	// 72 = 0x48
}

@property(retain, nonatomic) NSArray *activityVConstraints; // @synthesize activityVConstraints=_activityVConstraints;
@property(retain, nonatomic) NSArray *activityHConstraints; // @synthesize activityHConstraints=_activityHConstraints;
@property(retain, nonatomic) NSArray *labelConstraints; // @synthesize labelConstraints=_labelConstraints;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *outputLabel; // @synthesize outputLabel=_outputLabel;
@property(retain, nonatomic) UILabel *slashLabel; // @synthesize slashLabel=_slashLabel;
@property(retain, nonatomic) UILabel *inputLabel; // @synthesize inputLabel=_inputLabel;
@property(retain, nonatomic) UILabel *connectionStatusLabel; // @synthesize connectionStatusLabel=_connectionStatusLabel;
@property(retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
- (void)dealloc;	// IMP=0x000000000001348b
- (void)stopIndicator;	// IMP=0x0000000000013416
- (void)startIndicator;	// IMP=0x00000000000133a4
- (void)updateConstraints;	// IMP=0x0000000000013169
- (void)createInitialConstraints;	// IMP=0x0000000000012f3a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000012b8c

@end

