/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal> {
    void * _addressBook;
    NSArray * _allFollowersHandles;
    NSMutableDictionary * _dsidToFamilyPhoto;
    NSArray * _familyMembers;
    NSArray * _familySpecifiers;
    NSArray * _followersHandles;
    NSArray * _followersSpecifiers;
    UIAlertController * _genericErrorAlert;
    NSArray * _hashedFamilyDsids;
    BOOL  _isMyLocationEnabled;
    FMFHandle * _lastSelectedHandle;
    BOOL  _useFamilyCirclePhotos;
    BOOL  _useFamilyCirclePhotosLoaded;
}

@property (nonatomic) void*addressBook;
@property (nonatomic, retain) NSArray *allFollowersHandles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *dsidToFamilyPhoto;
@property (nonatomic, retain) NSArray *familyMembers;
@property (nonatomic, retain) NSArray *familySpecifiers;
@property (nonatomic, retain) NSArray *followersHandles;
@property (nonatomic, retain) NSArray *followersSpecifiers;
@property (nonatomic, retain) UIAlertController *genericErrorAlert;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *hashedFamilyDsids;
@property (nonatomic) BOOL isMyLocationEnabled;
@property (nonatomic, retain) FMFHandle *lastSelectedHandle;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useFamilyCirclePhotos;
@property (nonatomic) BOOL useFamilyCirclePhotosLoaded;

- (void).cxx_destruct;
- (id)_followerHandleWithHashedDSID:(id)arg1;
- (BOOL)_isFamilyMemberAFollower:(id)arg1;
- (BOOL)_isHandleAFollower:(id)arg1;
- (void)_loadFamilyMemberPhotos;
- (void)_loadFamilyMembers:(BOOL)arg1;
- (void)_meDeviceSpecifierWasTapped:(id)arg1;
- (void)_pushAddressBookUIForHandle:(id)arg1;
- (void)_setShareSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)_shareSwitchEnabled:(id)arg1;
- (void)_showFamilyMemberDetails:(id)arg1;
- (void)_showHandleDetails:(id)arg1;
- (id)_specifierForFamilyMember:(id)arg1;
- (id)_specifierForHandle:(id)arg1;
- (void)abChanged:(id)arg1;
- (void)addRemoveActionToContactViewController:(id)arg1;
- (void)addShareActionToContactViewController:(id)arg1;
- (void*)addressBook;
- (id)allFollowersHandles;
- (id)allHandlesMatchingABCardForSelectedHandle:(id)arg1;
- (void)dealloc;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveServerError:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)didUpdateHidingStatus:(BOOL)arg1;
- (void)displayGenericErrorAlert;
- (id)dsidToFamilyPhoto;
- (id)familyMembers;
- (id)familySpecifiers;
- (id)followersHandles;
- (id)followersSpecifiers;
- (id)formatStringForHours:(int)arg1 minutes:(int)arg2;
- (id)genericErrorAlert;
- (id)hashedFamilyDsids;
- (BOOL)isMyLocationEnabled;
- (id)lastSelectedHandle;
- (id)monogramForHandle:(id)arg1;
- (void)networkReachabilityUpdated:(BOOL)arg1;
- (BOOL)noMeDeviceSelected:(id)arg1;
- (id)offerTimeRemaining:(double)arg1;
- (BOOL)phoneNumberMatches:(id)arg1 phone2:(id)arg2;
- (void*)recordForHandle:(id)arg1;
- (void)reloadSpecifiersOnMainQueue;
- (void)removeFollower:(id)arg1;
- (id)reverseString:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllFollowersHandles:(id)arg1;
- (void)setDsidToFamilyPhoto:(id)arg1;
- (void)setFamilyMembers:(id)arg1;
- (void)setFamilySpecifiers:(id)arg1;
- (void)setFollowersHandles:(id)arg1;
- (void)setFollowersSpecifiers:(id)arg1;
- (void)setGenericErrorAlert:(id)arg1;
- (void)setHashedFamilyDsids:(id)arg1;
- (void)setIsMyLocationEnabled:(BOOL)arg1;
- (void)setLastSelectedHandle:(id)arg1;
- (void)setUseFamilyCirclePhotos:(BOOL)arg1;
- (void)setUseFamilyCirclePhotosLoaded:(BOOL)arg1;
- (void)shareMyLocation:(id)arg1;
- (id)sortedFollowersWithCombinedRecords:(id)arg1;
- (id)specifiers;
- (id)stringByKeepingCharacterSet:(id)arg1 inString:(id)arg2;
- (BOOL)useFamilyCirclePhotos;
- (BOOL)useFamilyCirclePhotosLoaded;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
