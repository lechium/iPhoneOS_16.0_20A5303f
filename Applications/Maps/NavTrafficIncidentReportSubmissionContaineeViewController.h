//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, NSString, NSTimer, TrafficIncidentLayoutItem, UIImageView, UILabel;
@protocol NavTrafficIncidentReportSubmissionContaineeDelegate;

@interface NavTrafficIncidentReportSubmissionContaineeViewController
{
    TrafficIncidentLayoutItem *_layoutItem;	// 8 = 0x8
    ContainerHeaderView *_headerView;	// 16 = 0x10
    UILabel *_primaryLabel;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    id <NavTrafficIncidentReportSubmissionContaineeDelegate> _reportingDelegate;	// 40 = 0x28
    NSTimer *_dismissTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000002777f9
@property(retain, nonatomic) NSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property(nonatomic) __weak id <NavTrafficIncidentReportSubmissionContaineeDelegate> reportingDelegate; // @synthesize reportingDelegate=_reportingDelegate;
- (void)_dismiss;	// IMP=0x001000000027772b
- (void)_cancelDismissTimer;	// IMP=0x00100000002776d1
- (id)headerView;	// IMP=0x00100000002776bc
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x001000000027763a
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000002775a7
- (void)updateContent;	// IMP=0x0010000000277503
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000027734c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000027730b
- (void)viewDidLoad;	// IMP=0x00100000002769fd
- (id)initWithItem:(id)arg1 report:(id)arg2;	// IMP=0x00100000002768ae
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000002768a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
