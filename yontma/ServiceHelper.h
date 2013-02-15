
typedef struct _SERVICE_HANDLER_PARAMS {
    HANDLE hServiceEndEvent;
    HANDLE hMonitorStopEvent;
    HANDLE hACDisconnectedEvent;
    HANDLE hWiredEthernetDisconnectedEvent;
} SERVICE_HANDLER_PARAMS, *PSERVICE_HANDLER_PARAMS;

HRESULT OpenServiceManager(__out SC_HANDLE* hSCManager);
HRESULT OpenYontmaService(__in SC_HANDLE hSCManager,
                          __out SC_HANDLE* phService);
HRESULT CreateYontmaService(__in PCTSTR pServicePath,
                            __out SC_HANDLE* phService);
HRESULT DeleteYontmaService(void);
HRESULT IsYontmaServiceInstalled(__out PBOOL pbIsInstalled);
HRESULT RunYontmaService(__in PSERVICE_HANDLER_PARAMS pServiceHandlerParams);
void StopYontmaService(void);