//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class TrafficIncidentLayoutItem, UIImageView, UILabel;

@interface NavIncidentReportingCell : UITableViewCell
{
    UIImageView *_leadingImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    TrafficIncidentLayoutItem *_item;	// 24 = 0x18
}

+ (double)heightForCellWithItem:(id)arg1 width:(double)arg2;	// IMP=0x0040000000a580cb
- (void).cxx_destruct;	// IMP=0x0020000000a582a5
@property(retain, nonatomic) TrafficIncidentLayoutItem *item; // @synthesize item=_item;
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x0010000000a57f87
- (void)_updateContent;	// IMP=0x0010000000a57eae
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000a57d66
- (void)prepareForReuse;	// IMP=0x0010000000a57d23
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000a574f8

@end

