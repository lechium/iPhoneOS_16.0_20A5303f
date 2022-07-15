//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIColor, UILabel, UIView;

@interface ReservationTableViewCell : UITableViewCell
{
    NSString *_titleText;	// 8 = 0x8
    NSString *_detailText;	// 16 = 0x10
    UILabel *_detailLabel;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIView *_detailView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000083094c
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIColor *titleTextColor;
@property(retain, nonatomic) UIColor *detailTextColor;
- (void)updateLabels;	// IMP=0x0010000000830673
- (void)setupTextVerticalConstraints;	// IMP=0x00100000008302a8
- (void)_setupConstraints;	// IMP=0x001000000082ff5e
- (void)loadDetailView;	// IMP=0x001000000082fe30
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000082fc48

@end
