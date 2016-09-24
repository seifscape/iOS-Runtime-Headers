/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDeflatedHeadline : NSObject <FCHeadlineProviding> {
    NTPBFeedViewportHeadline * _pbHeadline;
    FCSharedStringIndex * _sharedStrings;
}

@property (nonatomic, readonly, copy) NSString *accessoryText;
@property (nonatomic, readonly, copy) NSArray *allowedStorefrontIDs;
@property (nonatomic, readonly) unsigned int articleContentType;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, readonly) unsigned int articleRecordModificationDateMilliseconds;
@property (nonatomic, readonly) unsigned int backendArticleVersion;
@property (nonatomic, readonly, copy) NSArray *blockedStorefrontIDs;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (nonatomic, readonly) unsigned int contentType;
@property (nonatomic, readonly, copy) NSURL *contentURL;
@property (nonatomic, readonly) FCCoverArt *coverArt;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *endOfArticleTopicIDs;
@property (getter=isExplicitContent, nonatomic, readonly) BOOL explicitContent;
@property (getter=isFeatureCandidate, nonatomic, readonly) BOOL featureCandidate;
@property (nonatomic, readonly) int feedElementType;
@property (nonatomic, readonly) unsigned int feedHalfLifeMilliseconds;
@property (nonatomic, readonly, copy) NSString *feedID;
@property (nonatomic, readonly) unsigned int feedOrder;
@property (getter=isFromBlockedStorefront, nonatomic, readonly) BOOL fromBlockedStorefront;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly) unsigned int halfLife;
@property (nonatomic, readonly) BOOL hasGlobalUserFeedback;
@property (nonatomic, readonly) BOOL hasThumbnail;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *iAdCategories;
@property (nonatomic, readonly, copy) NSArray *iAdKeywords;
@property (nonatomic, readonly, copy) NSArray *iAdSectionIDs;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) BOOL isBlockedExplicitContent;
@property (nonatomic, readonly) BOOL isDraft;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } largestThumbnailSize;
@property (nonatomic, readonly, copy) NSDate *lastFetchedDate;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly, copy) NSString *localDraftPath;
@property (nonatomic, readonly) int minimumNewsVersion;
@property (nonatomic, readonly, copy) NSArray *moreFromPublisherArticleIDs;
@property (nonatomic, readonly) BOOL needsRapidUpdates;
@property (nonatomic, readonly) unsigned int order;
@property (getter=isPaid, nonatomic, readonly) BOOL paid;
@property (nonatomic, readonly) NTPBFeedViewportHeadline *pbHeadline;
@property (nonatomic, readonly, copy) NSString *primaryAudience;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly) unsigned int publishDateMilliseconds;
@property (nonatomic, readonly) unsigned int publisherArticleVersion;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly, copy) NSString *referencedArticleID;
@property (nonatomic, readonly, copy) NSArray *relatedArticleIDs;
@property (nonatomic, readonly) FCSharedStringIndex *sharedStrings;
@property (nonatomic, readonly, copy) NSString *shortExcerpt;
@property (nonatomic, readonly) BOOL showSubscriptionRequiredText;
@property (nonatomic, readonly, copy) NSObject<FCChannelProviding> *sourceChannel;
@property (nonatomic, readonly, copy) NSString *sourceChannelID;
@property (nonatomic, readonly, copy) NSString *sourceFeedID;
@property (nonatomic, readonly, copy) NSString *sourceName;
@property (getter=isSponsored, nonatomic, readonly) BOOL sponsored;
@property (nonatomic, readonly) FCTopStoriesStyleConfiguration *storyStyle;
@property (nonatomic, readonly) unsigned int storyType;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *surfacedByBinID;
@property (nonatomic, readonly, copy) NSString *surfacedByChannelID;
@property (nonatomic, readonly, copy) NSString *surfacedBySectionID;
@property (nonatomic, readonly, copy) NSString *surfacedByTopicID;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnail;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailFocalFrame;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailLQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailMedium;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailUltraHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidget;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property (nonatomic, readonly) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property (nonatomic, readonly) double tileProminenceScore;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isTopStory, nonatomic, readonly) BOOL topStory;
@property (nonatomic, readonly, copy) NSArray *topicFlags;
@property (nonatomic, readonly, copy) NSArray *topicIDs;
@property (nonatomic, readonly, copy) NSArray *topicScores;
@property (nonatomic, readonly) BOOL usesImageOnTopLayout;
@property (nonatomic, readonly, copy) NSString *versionIdentifier;
@property (nonatomic, readonly) double videoDuration;
@property (nonatomic, readonly) NSURL *videoURL;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (unsigned int)articleContentType;
- (id)articleID;
- (unsigned int)articleRecordModificationDateMilliseconds;
- (unsigned int)backendArticleVersion;
- (id)blockedStorefrontIDs;
- (id)clusterID;
- (unsigned int)contentType;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArt;
- (id)description;
- (id)endOfArticleTopicIDs;
- (int)feedElementType;
- (unsigned int)feedHalfLifeMilliseconds;
- (id)feedID;
- (unsigned int)feedOrder;
- (double)globalScore;
- (double)globalUserFeedback;
- (unsigned int)halfLife;
- (BOOL)hasGlobalUserFeedback;
- (BOOL)hasThumbnail;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (id)initWithPBHeadline:(id)arg1 sharedStrings:(id)arg2;
- (BOOL)isBlockedExplicitContent;
- (BOOL)isDeleted;
- (BOOL)isDraft;
- (BOOL)isExplicitContent;
- (BOOL)isFeatureCandidate;
- (BOOL)isFromBlockedStorefront;
- (BOOL)isGap;
- (BOOL)isPaid;
- (BOOL)isSponsored;
- (BOOL)isTopStory;
- (struct CGSize { double x1; double x2; })largestThumbnailSize;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (id)localDraftPath;
- (int)minimumNewsVersion;
- (id)moreFromPublisherArticleIDs;
- (BOOL)needsRapidUpdates;
- (unsigned int)order;
- (id)pbHeadline;
- (id)primaryAudience;
- (id)publishDate;
- (unsigned int)publishDateMilliseconds;
- (unsigned int)publisherArticleVersion;
- (id)publisherID;
- (id)referencedArticleID;
- (id)relatedArticleIDs;
- (id)sharedStrings;
- (id)shortExcerpt;
- (BOOL)showSubscriptionRequiredText;
- (id)sourceChannel;
- (id)sourceChannelID;
- (id)sourceFeedID;
- (id)sourceName;
- (id)storyStyle;
- (unsigned int)storyType;
- (id)subtitle;
- (id)surfacedByBinID;
- (id)surfacedByChannelID;
- (id)surfacedBySectionID;
- (id)surfacedByTopicID;
- (id)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailHQ;
- (id)thumbnailLQ;
- (id)thumbnailMedium;
- (id)thumbnailUltraHQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetHQ;
- (id)thumbnailWidgetHQTagged;
- (id)thumbnailWidgetLQ;
- (id)thumbnailWidgetLQTagged;
- (id)thumbnailWidgetTagged;
- (double)tileProminenceScore;
- (id)title;
- (id)topicFlags;
- (id)topicIDs;
- (id)topicScores;
- (BOOL)usesImageOnTopLayout;
- (id)versionIdentifier;
- (float)videoDuration;
- (id)videoURL;

@end