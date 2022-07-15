//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, NSString, TrafficFeatureTitleView, TrafficIncidentReport, TrafficIncidentTitleView, TrafficIncidentsViewController, VKTrafficIncidentFeature;

@interface TrafficIncidentContaineeViewController
{
    CDUnknownBlockType _dismissHandler;	// 8 = 0x8
    TrafficIncidentsViewController *_incidentsViewController;	// 16 = 0x10
    ContainerHeaderView *_headerView;	// 24 = 0x18
    TrafficFeatureTitleView *_macTitleView;	// 32 = 0x20
    TrafficIncidentTitleView *_titleView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000003f5343
@property(retain, nonatomic) TrafficIncidentTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TrafficFeatureTitleView *macTitleView; // @synthesize macTitleView=_macTitleView;
@property(retain, nonatomic) ContainerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) TrafficIncidentsViewController *incidentsViewController; // @synthesize incidentsViewController=_incidentsViewController;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void)dismiss;	// IMP=0x00100000003f528d
- (void)headerViewTapped:(id)arg1;	// IMP=0x00100000003f5250
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000003f523e
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000003f5101
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000003f500f
- (id)contentView;	// IMP=0x00100000003f4fbf
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x00100000003f4f3d
- (void)dealloc;	// IMP=0x00100000003f4e8d
- (struct CGSize)_calculatePreferredContentSize;	// IMP=0x00100000003f4d36
- (void)viewDidLayoutSubviews;	// IMP=0x00100000003f4bb1
- (void)_updatePreferredContentSize;	// IMP=0x00100000003f4b32
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000003f4b12
- (void)viewDidLoad;	// IMP=0x00100000003f4130
- (void)_logAdvisoryShown;	// IMP=0x00100000003f40df
- (void)_updateMacTableViewHeader;	// IMP=0x00100000003f3cd6
- (void)_updateHeaderView;	// IMP=0x00100000003f38d1
@property(retain, nonatomic) TrafficIncidentReport *incidentReport;
@property(retain, nonatomic) VKTrafficIncidentFeature *incident;
- (id)init;	// IMP=0x00100000003f3637

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
