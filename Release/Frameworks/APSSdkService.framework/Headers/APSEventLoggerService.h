






#ifndef APSEventLoggerService_h
#define APSEventLoggerService_h


@protocol APSEventLoggerService <NSObject>


- (void)start;


- (void)logEvent:(NSUInteger)event;


- (void)setRequestProductURL:(NSString *)productURL advURL:(NSString *)advURL reportURL:(NSString *)reportURL;


- (void)logEventWith:(NSUInteger)event withDic:(NSDictionary<NSString*, id>*) dic;


- (void)logEventWithModule:(NSString*)module andEvent:(NSUInteger)event
                    andDic:(NSDictionary<NSString*, id>*)dic completion:(void(^)(NSData*))completion;


- (void)logCountEventWithName:(NSString*)name;


- (void)logEnterMainEvent;



- (void)setModuleName:(NSString*)name;



- (void)setStateProvider:(NSDictionary<NSString *, NSString *> * (^)(void))provider;


- (void)setPersonalizedAdAgree:(BOOL)consent;


- (BOOL)isPersonalizedAdAgree;



- (BOOL)isEEA;


- (void)logInstall;


- (void)logStartup;


- (void)logMainPageShow;

- (void)logRegisterWithAccountId:(NSString *)accountId
                     accountType:(NSString *)accountType
                             age:(NSUInteger)age
                          gender:(NSUInteger)gender;


- (void)logLogin;

- (void)logLoginWithAccountId:(NSString *)accountId accountLevel:(NSString *)accountLevel;

- (void)logPaymentWithTransactionId:(NSString *)transactionId
                        paymentType:(NSString *)paymentType
                       currencyType:(NSString *)currencyType
                        realCoinNum:(float)realCoinNum
                     virtualCoinNum:(long)virtualCoinNum
                            iapName:(NSString *)iapName
                             iapNum:(long)iapNum;

- (void)logPaySuccessWithTransactionId:(NSString *)transactionId
                           paymentType:(NSString *)paymentType
                          currencyType:(NSString *)currencyType
                           realCoinNum:(float)realCoinNum
                        virtualCoinNum:(long)virtualCoinNum
                               iapName:(NSString *)iapName
                                iapNum:(long)iapNum;

- (void)logSubscribeWithTransactionId:(NSString *)transactionId
                          paymentType:(NSString *)paymentType
                         currencyType:(NSString *)currencyType
                          realCoinNum:(float)realCoinNum;

- (void)logBuyWithItemName:(NSString *)itemName;

- (void)logBuyWithItemName:(NSString *)itemName itemNum:(long)itemNum itemTotalPrice:(float)itemTotalPrice;

- (void)logSellWithItemName:(NSString *)itemName itemNum:(long)itemNum itemTotalPrice:(float)itemTotalPrice;

- (void)logQuestWithQuestIndex:(long)questIndex
                   questStatus:(NSString *)questStatus
                     questType:(NSString *)questType
                       questId:(NSString *)questId
                     questName:(NSString *)questName
                      progress:(long)progress
                         times:(long)times;

- (void)logQuestWithQuestIndex:(long)questIndex questStatus:(NSString *)questStatus;

- (void)logQuestBeginWithQuestIndex:(long)questIndex;

- (void)logQuestCompletedWithQuestIndex:(long)questIndex;

- (void)logQuestFailedWithQuestIndex:(long)questIndex;

- (void)logQuestBeginWithQuestIndex:(long)questIndex
                          questType:(NSString *)questType
                            questId:(NSString *)questId
                          questName:(NSString *)questName
                           progress:(long)progress
                              times:(long)times;

- (void)logQuestCompletedWithQuestIndex:(long)questIndex
                              questType:(NSString *)questType
                                questId:(NSString *)questId
                              questName:(NSString *)questName
                               progress:(long)progress
                                  times:(long)times;

- (void)logQuestFailedWithQuestIndex:(long)questIndex
                           questType:(NSString *)questType
                             questId:(NSString *)questId
                           questName:(NSString *)questName
                            progress:(long)progress
                               times:(long)times;

- (void)logAdvReadyWithTrigger:(NSString *)trigger advType:(NSString *)advType isReady:(long)isReady;

- (void)logAdvOpenWithTrigger:(NSString *)trigger advType:(NSString *)advType;

- (void)logAdvContentShowWithTrigger:(NSString *)trigger advType:(NSString *)advType;

- (void)logAdvContentClickWithTrigger:(NSString *)trigger advType:(NSString *)advType;

- (void)logAdvRewardedWithTrigger:(NSString *)trigger;

- (void)logAdvCloseWithTrigger:(NSString *)trigger advType:(NSString *)advType;

- (void)logCustomEventWithName:(NSString *)name customParamsJson:(NSString *)customParamsJson;


- (void)logClickWithName:(NSString *)name;


- (void)logClickWithName:(NSString *)name params:(NSDictionary<NSString *, id> *)dic;


- (void)shareTextWithDialogTitle:(NSString *)dialogTitle title:(NSString *)title content:(NSString *)content;

- (void)logCoreClickWithName:(NSString *)name;

- (void)logCoreOperationWithName:(NSString *)name status:(NSString *)status;

- (void)logCoreShowWithName:(NSString *)name;

- (void)logGdprPageShow;

- (void)logGdprAgree;

- (void)logGdprDisagree;

- (void)logDebugWithName:(NSString *)name
                  action:(NSString *)action
                    text:(NSString *)text
              resultCode:(NSString *)resultCode
                    flag:(NSString *)flag;


- (NSString *)getRecordURL;


- (void)logEventExWithModule:(NSString *)module andEvent:(NSUInteger)event andDic:(NSDictionary<NSString*, id>*)dic;



- (void)addBackListWithClassName:(NSArray *)nameArray;



@optional
- (NSString *)getCache;


@optional
- (NSString *)eventTable;


@optional
- (NSString *)sendTable;

@end
#endif 


