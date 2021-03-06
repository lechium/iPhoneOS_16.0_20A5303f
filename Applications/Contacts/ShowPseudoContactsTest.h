//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTestNavigationControllerDelegate, NSArray, NSMutableDictionary, NSString;

@interface ShowPseudoContactsTest
{
    _Bool _animate;	// 8 = 0x8
    int _nextContactIndex;	// 12 = 0xc
    int _maxContactIndex;	// 16 = 0x10
    NSMutableDictionary *_extraResults;	// 24 = 0x18
    unsigned long long _currentDirectoryIndex;	// 32 = 0x20
    NSArray *_allSearchQueries;	// 40 = 0x28
    unsigned long long _currentQueryIndex;	// 48 = 0x30
    CNTestNavigationControllerDelegate *_navControllerDelegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000e798
@property(retain, nonatomic) CNTestNavigationControllerDelegate *navControllerDelegate; // @synthesize navControllerDelegate=_navControllerDelegate;
@property(nonatomic) unsigned long long currentQueryIndex; // @synthesize currentQueryIndex=_currentQueryIndex;
@property(retain, nonatomic) NSArray *allSearchQueries; // @synthesize allSearchQueries=_allSearchQueries;
@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
@property(nonatomic) unsigned long long currentDirectoryIndex; // @synthesize currentDirectoryIndex=_currentDirectoryIndex;
@property(retain, nonatomic) NSMutableDictionary *extraResults; // @synthesize extraResults=_extraResults;
@property(nonatomic) int maxContactIndex; // @synthesize maxContactIndex=_maxContactIndex;
@property(nonatomic) int nextContactIndex; // @synthesize nextContactIndex=_nextContactIndex;
- (void)startSearchQuery;	// IMP=0x000000000000e505
- (void)showPseudoContactsListForIPhone;	// IMP=0x001000000000e343
- (void)showNextContact;	// IMP=0x001000000000df94
- (void)iterateContact;	// IMP=0x001000000000dc80
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000000dc6b
- (void)didShow:(id)arg1;	// IMP=0x001000000000db06
- (void)resetDelegate;	// IMP=0x001000000000da0a
- (void)prepareForNextTest;	// IMP=0x001000000000d9cc
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x001000000000d55f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

