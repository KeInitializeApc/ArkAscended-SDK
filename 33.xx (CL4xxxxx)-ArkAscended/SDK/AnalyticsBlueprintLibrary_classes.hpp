#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnalyticsBlueprintLibrary* GetDefaultObj();

	bool StartSessionWithAttributes();
	bool StartSession();
	void SetUserId(const class FString& UserId);
	void SetSessionId(class FString* SessionId);
	void SetLocation(class FString* Location);
	void SetGender(class FString* Gender);
	void SetBuildInfo(class FString* BuildInfo);
	int32 SetAge();
	TArray<struct FAnalyticsEventAttr> RecordSimpleItemPurchaseWithAttributes();
	int32 RecordSimpleItemPurchase();
	TArray<struct FAnalyticsEventAttr> RecordSimpleCurrencyPurchaseWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	void RecordSimpleCurrencyPurchase(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	TArray<struct FAnalyticsEventAttr> RecordProgressWithFullHierarchyAndAttributes(class FString* ProgressType, TArray<class FString>* ProgressNames);
	TArray<struct FAnalyticsEventAttr> RecordProgressWithAttributes(class FString* ProgressType, class FString* ProgressName);
	void RecordProgress(class FString* ProgressType, class FString* ProgressName);
	int32 RecordItemPurchase(class FString* Currency, int32* PerItemCost);
	TArray<struct FAnalyticsEventAttr> RecordEventWithAttributes(class FString* EventName);
	void RecordEventWithAttribute(class FString* EventName, class FString* AttributeName, class FString* AttributeValue);
	void RecordEvent(class FString* EventName);
	TArray<struct FAnalyticsEventAttr> RecordErrorWithAttributes();
	class FString RecordError();
	void RecordCurrencyPurchase(class FString* GameCurrencyType, int32* GameCurrencyAmount, class FString* RealCurrencyType, float* RealMoneyCost, class FString* PaymentProvider);
	TArray<struct FAnalyticsEventAttr> RecordCurrencyGivenWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	void RecordCurrencyGiven(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	struct FAnalyticsEventAttr MakeEventAttribute(class FString* AttributeName, class FString* AttributeValue);
	class FString GetUserId();
	class FString GetSessionId();
	void FlushEvents();
	void EndSession();
};

}


