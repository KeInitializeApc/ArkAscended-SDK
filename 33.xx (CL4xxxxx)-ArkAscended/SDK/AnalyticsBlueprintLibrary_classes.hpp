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

	TArray<struct FAnalyticsEventAttr> StartSessionWithAttributes(bool ReturnValue);
	void StartSession(bool ReturnValue);
	class FString SetUserId();
	class FString SetSessionId();
	void SetLocation(class FString* Location);
	void SetGender(class FString* Gender);
	void SetBuildInfo(class FString* BuildInfo);
	void SetAge(int32* Age);
	TArray<struct FAnalyticsEventAttr> RecordSimpleItemPurchaseWithAttributes(int32 ItemQuantity);
	class FString RecordSimpleItemPurchase(int32 ItemQuantity);
	TArray<struct FAnalyticsEventAttr> RecordSimpleCurrencyPurchaseWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	void RecordSimpleCurrencyPurchase(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	TArray<struct FAnalyticsEventAttr> RecordProgressWithFullHierarchyAndAttributes(class FString* ProgressType, TArray<class FString>* ProgressNames);
	TArray<struct FAnalyticsEventAttr> RecordProgressWithAttributes(class FString* ProgressType, class FString* ProgressName);
	void RecordProgress(class FString* ProgressType, class FString* ProgressName);
	class FString RecordItemPurchase(class FString* Currency, int32* PerItemCost, int32 ItemQuantity);
	TArray<struct FAnalyticsEventAttr> RecordEventWithAttributes(class FString* EventName);
	class FString RecordEventWithAttribute(class FString* EventName, class FString* AttributeValue);
	void RecordEvent(class FString* EventName);
	TArray<struct FAnalyticsEventAttr> RecordErrorWithAttributes();
	class FString RecordError();
	void RecordCurrencyPurchase(class FString* GameCurrencyType, int32* GameCurrencyAmount, class FString* RealCurrencyType, float* RealMoneyCost, class FString* PaymentProvider);
	TArray<struct FAnalyticsEventAttr> RecordCurrencyGivenWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	void RecordCurrencyGiven(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	class FString MakeEventAttribute(class FString* AttributeValue, const struct FAnalyticsEventAttr& ReturnValue);
	void GetUserId(const class FString& ReturnValue);
	void GetSessionId(const class FString& ReturnValue);
	void FlushEvents();
	void EndSession();
};

}


