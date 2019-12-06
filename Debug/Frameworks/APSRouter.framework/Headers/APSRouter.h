



























































#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



typedef NS_ENUM (NSUInteger, APSRouterExecuteType)
{
    APSRouterExecuteTypeAUTO = 0,
    APSRouterExecuteTypePushOnly = 1,
    APSRouterExecuteTypePresentOnly = 2,
    APSRouterExecuteTypeBlockOnly = 3,
};

typedef id (^APSRouterBlock)(NSDictionary *params);

@interface APSRouter : NSObject



+(instancetype)defalutRouter;



+(void)setDefalutRouterScheme:(NSString*)scheme;



+(instancetype)routerWithScheme:(NSString*)scheme;


+(BOOL)canOpenURL:(NSString*)url;



+(NSArray*)registeredSchemes;


+(UIViewController*)viewControllerWithURL:(NSString*)url;


+(BOOL)executeURL:(NSString*)url userInfo:(id)obj style:(APSRouterExecuteType)executeType;



+(id)executeBlockOnlyURL:(NSString*)url userInfo:(id)obj;


-(void)useHost:(NSString*)host withViewController:(Class)viewController;


-(void)useHost:(NSString *)host restfulPath:(NSString*)path withViewController:(Class)viewController;



-(void)useURL:(NSString*)url withViewController:(Class)viewController;



-(void)useURL:(NSString*)url withBlock:(APSRouterBlock)block;



+(void)addUniversalHosts:(NSString*)host;

    

@property(nonatomic,copy,readonly)NSString * scheme;
    
@end

@interface UIViewController (APSRouter)

@property (nonatomic, strong) NSDictionary *apsparams;

@end
