//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

@interface TransitSchedulesHeadsignCollectionViewCell : UICollectionViewCell
{
    UILabel *_headsignLabel;	// 8 = 0x8
    NSString *_headsign;	// 16 = 0x10
}

+ (id)cellIdentifier;	// IMP=0x00200000007ef415
- (void).cxx_destruct;	// IMP=0x00200000007ef4e9
@property(copy, nonatomic) NSString *headsign; // @synthesize headsign=_headsign;
- (void)updateStyling;	// IMP=0x00100000007ef463
- (void)setSelected:(_Bool)arg1;	// IMP=0x00100000007ef422
- (void);	// IMP=0x00100000007eecef
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007eec92
- (id)init;	// IMP=0x00100000007eec46

@end
