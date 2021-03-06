//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class MISSING_TYPE, NSString;
@protocol CLAvengerScannerClientProtocol;

@protocol CLAvengerScannerServiceProtocol <CLIntersiloServiceProtocol>
- (void)stopWatchAdvertisementBufferScan:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (void)startWatchAdvertisementBufferScan:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (void)stopBTFindingScan:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (void)startBTFindingScan:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (void)performTemporaryHawkeyeLowEnergyScan:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (MISSING_TYPE *)terminateTemporaryLongAggressiveScan: /* Error: Ran out of types for this method. */;
- (void)performTemporaryLongAggressiveScan:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (void)performTemporaryAggressiveScanForFindMyAccessoryManager:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (void)performTemporaryAggressiveScan:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (_Bool)syncgetIsScanning;
- (void)stopMonitoringAvengerAdvertisementsForClient:(byref id <CLAvengerScannerClientProtocol>)arg1;
- (void)startMonitoringAvengerAdvertisementsForClient:(byref id <CLAvengerScannerClientProtocol>)arg1 optedIn:(_Bool)arg2 clientName:(NSString *)arg3;
- (void)startMonitoringAvengerAdvertisementsForClient:(byref id <CLAvengerScannerClientProtocol>)arg1 clientName:(NSString *)arg2;
@end

