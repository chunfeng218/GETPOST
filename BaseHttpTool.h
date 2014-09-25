/**
 *  封装的网络请求 支持ASI 和 最新的AFN
 */

#import <Foundation/Foundation.h>

typedef void (^BaseHttpToolSucess)(NSDictionary * json);
typedef void (^BaseHttpToolFailur)(NSError *error);

@interface BaseHttpTool : NSObject

+(void)postWithUrl:(NSString *)url parameters:(NSDictionary *)parameters sucess:(BaseHttpToolSucess)sucess failur:(BaseHttpToolFailur)failur;

+(void)getWithUrl:(NSString *)url parameters:(NSDictionary *)parameters sucess:(BaseHttpToolSucess)sucess failur:(BaseHttpToolFailur)failur;

+(void)requestWithMethod:(NSString *)method url:(NSString *)url parameters:(NSDictionary *)parameters sucess:(BaseHttpToolSucess)sucess failur:(BaseHttpToolFailur)failur;

@end
