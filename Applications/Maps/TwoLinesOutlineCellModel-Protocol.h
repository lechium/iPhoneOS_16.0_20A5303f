//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MapsUIDiffableDataSourceViewModel-Protocol.h"

@class NSArray, SidebarOutlineCellBackgroundModel, TwoLinesOutlineCellActionModel;
@protocol TwoLinesContentViewModel;

@protocol TwoLinesOutlineCellModel <MapsUIDiffableDataSourceViewModel>
@property(readonly, nonatomic) TwoLinesOutlineCellActionModel *actionModel;
@property(readonly, nonatomic) SidebarOutlineCellBackgroundModel *backgroundModel;
@property(readonly, nonatomic) NSArray *accessoryModels;
@property(readonly, nonatomic) id <TwoLinesContentViewModel> contentModel;
@end
